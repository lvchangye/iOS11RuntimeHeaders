/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPasteboardOptions : NSObject {
    NSDate * _expirationDate;
    bool  _localOnly;
}

@property (nonatomic, retain) NSDate *expirationDate;
@property (getter=isLocalOnly, nonatomic) bool localOnly;

+ (id)optionsWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)expirationDate;
- (id)initWithOptionsDictionary:(id)arg1;
- (bool)isLocalOnly;
- (void)setExpirationDate:(id)arg1;
- (void)setLocalOnly:(bool)arg1;

@end
