/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSProgressProxy : NSProgress {
    <NSProgressPublisher> * _forwarder;
    bool  _isOld;
    id /* block */  _unpublishingHandler;
}

- (void)_acknowledgeWithSuccess:(bool)arg1;
- (id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(bool)arg3;
- (void)_invokePublishingHandler:(id /* block */)arg1;
- (void)_invokeUnpublishingHandler;
- (void)_setRemoteValue:(id)arg1 forKey:(id)arg2 inUserInfo:(bool)arg3;
- (void)acknowledgeWithSuccess:(bool)arg1;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)cancel;
- (void)dealloc;
- (bool)isOld;
- (void)pause;
- (void)prioritize;
- (void)publish;
- (void)resignCurrent;
- (void)resume;
- (void)setCancellable:(bool)arg1;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setEstimatedTimeRemaining:(id)arg1;
- (void)setFileCompletedCount:(id)arg1;
- (void)setFileOperationKind:(id)arg1;
- (void)setFileTotalCount:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setPausable:(bool)arg1;
- (void)setPausingHandler:(id /* block */)arg1;
- (void)setPrioritizable:(bool)arg1;
- (void)setPrioritizationHandler:(id /* block */)arg1;
- (void)setThroughput:(id)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)unpublish;

@end