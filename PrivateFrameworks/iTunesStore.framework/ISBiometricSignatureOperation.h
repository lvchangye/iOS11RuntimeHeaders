/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISBiometricSignatureOperation : ISOperation {
    ISBiometricStore * _biometricStore;
    SSBiometricAuthenticationContext * _context;
    ISTouchIDDialog * _dialog;
    id /* block */  _outputBlock;
}

@property (nonatomic, retain) ISBiometricStore *biometricStore;
@property (retain) SSBiometricAuthenticationContext *context;
@property (nonatomic, retain) ISTouchIDDialog *dialog;
@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (id)_reasonForDialogBody:(id)arg1;
- (id)biometricStore;
- (id)context;
- (id)dialog;
- (id)initWithBiometricAuthenticationContext:(id)arg1 dialog:(id)arg2;
- (id /* block */)outputBlock;
- (void)run;
- (void)setBiometricStore:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDialog:(id)arg1;
- (void)setOutputBlock:(id /* block */)arg1;

@end