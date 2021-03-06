/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNTCC : NSObject {
    <CNContactsLogger> * _logger;
    bool  _simulateAccessPrompt;
    double  _simulateAccessPromptDelay;
    bool  _simulateAccessPromptGranted;
    long long  _simulateType;
}

@property (nonatomic, readonly) <CNContactsLogger> *logger;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_simulateQueue;
- (int)accessPreflight;
- (void)accessRequestWithCompletion:(id /* block */)arg1;
- (unsigned char)checkAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)init;
- (id)initWithEnvironment:(id)arg1;
- (unsigned char)isAccessRestricted;
- (id)logger;
- (void)simulate:(long long)arg1;
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(bool)arg1 withDelay:(double)arg2;

@end
