/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> { 
        struct BookmarkAndHistoryCompletionMatch {} *m_ptr; 
    }  _match;
}

@property (nonatomic, readonly) <WBSURLCompletionMatchData> *data;
@property (nonatomic, readonly) float weight;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)data;
- (id)initWithBookmarkAndHistoryCompletionMatch:(struct Ref<SafariShared::BookmarkAndHistoryCompletionMatch> { struct BookmarkAndHistoryCompletionMatch {} *x1; }*)arg1 userInput:(id)arg2;
- (id)originalURLString;
- (id)parsecDomainIdentifier;
- (id)title;
- (id)userVisibleURLString;
- (float)weight;

@end
