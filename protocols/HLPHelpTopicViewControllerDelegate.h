/* Generated by RuntimeBrowser.
 */

@protocol HLPHelpTopicViewControllerDelegate <NSObject>

@required

- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 failToLoadWithError:(NSError *)arg2;
- (void)helpTopicViewControllerCurrentTopicIsPassionPoint:(HLPHelpTopicViewController *)arg1;
- (void)helpTopicViewControllerDoneButtonTapped:(HLPHelpTopicViewController *)arg1;
- (void)helpTopicViewControllerShowHelpBookInfo:(HLPHelpTopicViewController *)arg1;

@optional

- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 selectedHelpTopicItem:(HLPHelpTopicItem *)arg2;
- (void)helpTopicViewControllerTableOfContentButtonTapped:(HLPHelpTopicViewController *)arg1;

@end