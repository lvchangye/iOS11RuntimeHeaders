/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerPath : NSObject <NSCopying> {
    NSString * _bundleID;
    void * _mediaRemotePlayerPath;
    NSString * _playerID;
    MPAVRoute * _route;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (getter=isInProcess, nonatomic, readonly) bool inProcess;
@property (nonatomic, readonly) void*mediaRemotePlayerPath;
@property (nonatomic, readonly, copy) NSString *playerID;
@property (nonatomic, readonly, copy) NSString *representedBundleDisplayName;
@property (nonatomic, readonly) MPAVRoute *route;
@property (getter=isSystemMusicPath, nonatomic, readonly) bool systemMusicPath;

+ (id)deviceActivePlayerPath;
+ (id)pathWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;
+ (id)pathWithRoute:(id)arg1 mediaRemotePlayerPath:(void*)arg2;
+ (id)systemMusicPathWithRoute:(id)arg1 playerID:(id)arg2;

- (void).cxx_destruct;
- (void*)_createMediaRemotePlayerPathWithOrigin:(void*)arg1;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRoute:(id)arg1 bundleID:(id)arg2 playerID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isInProcess;
- (bool)isSystemMusicPath;
- (void*)mediaRemotePlayerPath;
- (id)playerID;
- (id)representedBundleDisplayName;
- (void)resolveWithCompletion:(id /* block */)arg1;
- (void)resolveWithRouteResolvedHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)route;

@end
