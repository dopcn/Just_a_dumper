//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIImage, UINavigationController, VSReputation, VSServiceShareContext, VSShareDataModel, VSShareMenuBarItem, VSShareVideoModel;
@protocol VSServiceShareProtocol;

@protocol VSServiceShareProtocol <NSObject>
+ (void)shareWithShareScene:(unsigned long long)arg1 title:(NSString *)arg2 content:(NSString *)arg3 thumbImage:(id)arg4 url:(NSString *)arg5 defaultImage:(UIImage *)arg6 callback:(void (^)(_Bool, unsigned long long))arg7;
+ (void)shareLiveWithShareScene:(unsigned long long)arg1 shareDataModel:(VSShareDataModel *)arg2 shareResultCallBack:(void (^)(_Bool, unsigned long long))arg3;
+ (id <VSServiceShareProtocol>)defaultShareService;
+ (id <VSServiceShareProtocol>)shareServiceWithContext:(VSServiceShareContext *)arg1;
+ (void)hideShareView;
- (void)shareDiscoverPictureAlbum;
- (void)shareDiscoverActivity;
- (void)shareDailySignWithImage:(UIImage *)arg1 andKey:(NSString *)arg2;
- (void)hideShareMenu;
- (void)shareGroupBuyWithOrderSn:(NSString *)arg1 shareUrl:(NSString *)arg2 adFullImage:(NSString *)arg3 shareSpecialExtendInfo:(NSString *)arg4;
- (void)shareReputationAlbumWithTitle:(NSString *)arg1 content:(NSString *)arg2 imageUrl:(NSString *)arg3 shareUrl:(NSString *)arg4;
- (void)shareCategory;
- (void)shareBrandWithSn:(NSString *)arg1 brandName:(NSString *)arg2;
- (void)shareReputation:(VSReputation *)arg1 withBigImage:(UIImage *)arg2 shareUrl:(NSString *)arg3 withID:(NSString *)arg4;
- (void)shareVideo:(VSShareVideoModel *)arg1 withID:(NSString *)arg2;
- (void)smsSendGift:(NSURL *)arg1 navigationController:(UINavigationController *)arg2;
- (void)shareSendGift:(NSURL *)arg1;
- (void)sharePayAnother:(NSString *)arg1;
- (void)shareImageData:(NSData * (^)(void))arg1 withID:(NSString *)arg2 type:(NSString *)arg3;
- (void)shareImageData:(NSData * (^)(void))arg1 withID:(NSString *)arg2;
- (void)shareImageData:(NSData * (^)(void))arg1;
- (void)shareMenuBarWithItem:(VSShareMenuBarItem *)arg1;
- (void)requestAppShareInfoWithActivityID:(NSString *)arg1 mcpShareType:(NSString *)arg2 mcpShareExtendInfo:(NSString *)arg3 dataResultCallback:(void (^)(NSArray *, VSSpecAppShareInfo *))arg4 failCallback:(void (^)(void))arg5;
- (void)shareScreenShotWithScreenshotImage:(UIImage *)arg1 resultBlock:(void (^)(unsigned long long))arg2;
- (void)shareGoods;
- (void)shareByShareType:(unsigned long long)arg1 shareNSUrl:(NSURL *)arg2 shareUrl:(NSString *)arg3 adFullImage:(NSString *)arg4 wapId:(NSString *)arg5 openWapType:(unsigned long long)arg6;
@end

