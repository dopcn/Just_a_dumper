//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SNPaymentEngineDelegate-Protocol.h"

@class AVPlayer, NSMutableDictionary, NSString, SNPaymentEngine, SWAudioPackageCache, SWAudioProduct, SWAudioRequestQueue;

@interface SWAudioPackageEngine : NSObject <SNPaymentEngineDelegate>
{
    SNPaymentEngine *engine;
    SWAudioPackageCache *cache;
    SWAudioRequestQueue *queue;
    NSMutableDictionary *hudMessages;
    _Bool _showNew;
    _Bool _updating;
    _Bool _auditionPlaying;
    _Bool _loadMore;
    unsigned long long currentPage;
    AVPlayer *_player;
    NSMutableDictionary *purchasingProductsDict;
    SWAudioProduct *_auditionProduct;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)sharedEngine;
@property(nonatomic, getter=isAuditionPlaying) _Bool auditionPlaying; // @synthesize auditionPlaying=_auditionPlaying;
@property(getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(retain) NSMutableDictionary *hudMessages; // @synthesize hudMessages;
@property(retain, nonatomic) SWAudioProduct *auditionProduct; // @synthesize auditionProduct=_auditionProduct;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)didCompleteRestoreWithEngine:(id)arg1;
- (void)engine:(id)arg1 restoreDidSucceedWithProductIdentifier:(id)arg2;
- (void)engine:(id)arg1 restoreDidFailWithError:(id)arg2;
- (void)engine:(id)arg1 purchaseDidSucceedWithProductIdentifier:(id)arg2;
- (void)engine:(id)arg1 purchaseDidFailWithProductIdentifier:(id)arg2 error:(id)arg3;
- (void)handleMemoryWarning:(id)arg1;
- (void)handleFollowAuthorParseResult:(id)arg1 withProduct:(id)arg2;
- (void)parseFollowAuthorData:(id)arg1 withProduct:(id)arg2;
- (void)handleParseResult:(id)arg1;
- (void)parseAudioListData:(id)arg1;
- (unsigned long long)indexOfProduct:(id)arg1 withDownloadStatus:(int)arg2;
- (unsigned long long)indexOfUndownloadedProduct:(id)arg1;
- (unsigned long long)indexOfDownloadedProduct:(id)arg1;
- (struct SWAudioProductIndexPath)indexPathOfProduct:(id)arg1;
- (id)productAtIndexPath:(struct SWAudioProductIndexPath)arg1;
- (id)undownloadedProductAtIndex:(unsigned long long)arg1;
- (id)downloadedProductAtIndex:(unsigned long long)arg1;
- (unsigned long long)productsCountWithDownloadStatus:(int)arg1;
- (unsigned long long)undownloadedProductsCount;
- (unsigned long long)downloadedProductsCount;
- (int)productTypeAtIndexPath:(struct SWAudioProductIndexPath)arg1;
- (_Bool)isProductStar:(id)arg1;
- (_Bool)isProductStarAtIndexPath:(struct SWAudioProductIndexPath)arg1;
- (struct SWAudioProductIndexPath)deleteProductAtIndexPath:(struct SWAudioProductIndexPath)arg1;
- (int)productPayTypeAtIndexPath:(struct SWAudioProductIndexPath)arg1;
- (_Bool)isProductFree:(id)arg1;
- (_Bool)isProductFreeAtIndexPath:(struct SWAudioProductIndexPath)arg1;
- (void)restoreCompletedTransactions;
- (void)purchaseProductAtIndexPath:(struct SWAudioProductIndexPath)arg1;
- (_Bool)isProductPurchased:(id)arg1;
- (_Bool)isProductPurchasedAtIndexPath:(struct SWAudioProductIndexPath)arg1;
- (void)registerForTransactionObserver;
- (float)audioPackageDownloadPercentWithIdentifier:(id)arg1;
- (int)audioPackageRequestStatusWithIdentifier:(id)arg1;
- (void)cancelDownloadAudioDataAtIndexPath:(struct SWAudioProductIndexPath)arg1;
- (void)downloadAudioDataAtIndexPath:(struct SWAudioProductIndexPath)arg1;
- (_Bool)isProductAuditioning:(id)arg1;
- (void)stopAudioAudition;
- (void)startAudioAuditionAtIndexPath:(struct SWAudioProductIndexPath)arg1;
- (void)itemFailedToPlayToEndTime:(id)arg1;
- (void)itemDidPlayToEndTime:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)selectedAudioPackageIsStarPackage;
- (id)selectedAudioPackagePath;
- (id)coverImageForProduct:(id)arg1;
- (void)startFollowAuthorRequestWithProduct:(id)arg1;
- (void)loadMoreAudioProducts;
- (_Bool)onlineProductsAllLoaded;
- (void)updateAudioProducts;
- (void)sendRequestWithParams:(id)arg1;
- (void)setPagesCount:(unsigned long long)arg1;
- (unsigned long long)pagesCount;
- (void)setOnlineProductsCount:(unsigned long long)arg1;
- (unsigned long long)onlineProductsCount;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (unsigned long long)pageSize;
- (_Bool)needUpdate;
- (void)setSelectedProduct:(id)arg1;
- (id)selectedProduct;
- (_Bool)isProductSelected:(id)arg1;
- (id)forwardedProductIds;
- (void)addForwardedProductId:(id)arg1;
- (_Bool)isProductForwarded:(id)arg1;
- (id)followedAuthors;
- (void)addFollowedAuthor:(id)arg1;
- (_Bool)isProductAuthorFollowed:(id)arg1;
@property _Bool showNew; // @synthesize showNew=_showNew;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

