//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FALCNewRoomGiftModel, FALCSelfSendGiftEvent, NSString;
@protocol FALCNewGiftDataProviderDelegate;

@protocol FALCNewGiftDataProviderProtocol <NSObject>
@property(nonatomic) __weak id <FALCNewGiftDataProviderDelegate> delegate;
@property(retain, nonatomic) NSString *otherNickName;
@property(retain, nonatomic) NSString *starNickName;
@property(nonatomic) long long starCount;
@property(nonatomic) long long starKugouId;
@property(nonatomic) long long roomId;
@property(nonatomic) long long otherUserId;
@property(nonatomic) long long starUserId;
- (void)sendGiftToGuestWithModel:(FALCNewRoomGiftModel *)arg1 giftNumStr:(NSString *)arg2 comboStatus:(unsigned long long)arg3 unionId:(long long)arg4 receiverUserLogo:(NSString *)arg5;
- (void)sendFXBigPriceGiftWithModel:(FALCNewRoomGiftModel *)arg1 toId:(long long)arg2 giftNumStr:(NSString *)arg3 comboStatus:(unsigned long long)arg4 isPKGift:(long long)arg5 giftEvent:(FALCSelfSendGiftEvent *)arg6 receiverUserLogo:(NSString *)arg7;
- (void)sendFXLowPriceGiftWithModel:(FALCNewRoomGiftModel *)arg1 toId:(long long)arg2 giftNumStr:(NSString *)arg3 continueGiftType:(long long)arg4 comboStatus:(unsigned long long)arg5 isPKGift:(long long)arg6 giftEvent:(FALCSelfSendGiftEvent *)arg7 receiverUserLogo:(NSString *)arg8;
- (void)sendArtistDigitalAlbumGiftWithModel:(FALCNewRoomGiftModel *)arg1 giftNumStr:(NSString *)arg2 comboStatus:(unsigned long long)arg3 giftEvent:(FALCSelfSendGiftEvent *)arg4 receiverUserLogo:(NSString *)arg5;
- (void)getSongCouponWithStarUserId:(long long)arg1 withStarLevel:(long long)arg2 SuccessHandler:(void (^)(FALCSongCoupon *))arg3 FailHandler:(void (^)(NSError *))arg4;
- (long long)getUserStarCount;
- (_Bool)giftNumStrIsAllIn:(NSString *)arg1;
- (long long)getGiftNumWithNumStr:(NSString *)arg1 giftPrice:(long long)arg2;
- (void)getGiftListWithType:(long long)arg1 liveType:(long long)arg2 isPk:(_Bool)arg3 type:(long long)arg4 result:(void (^)(NSArray<FALCNewGiftCategoryInfo> *, long long, NSError *))arg5;
- (void)updateRoomId:(long long)arg1 starKugouId:(long long)arg2 userId:(long long)arg3 liveType:(long long)arg4 isPk:(_Bool)arg5 type:(long long)arg6;
- (void)sendGiftToOtherWithModel:(FALCNewRoomGiftModel *)arg1 giftNumStr:(NSString *)arg2 comboStatus:(unsigned long long)arg3 unionId:(long long)arg4 receiverUserLogo:(NSString *)arg5;
- (void)sendLowPriceGiftWithModel:(FALCNewRoomGiftModel *)arg1 giftNumStr:(NSString *)arg2 comboStatus:(unsigned long long)arg3 giftEvent:(FALCSelfSendGiftEvent *)arg4 unionId:(long long)arg5 receiverUserLogo:(NSString *)arg6;
- (void)sendBigGiftWithModel:(FALCNewRoomGiftModel *)arg1 giftNumStr:(NSString *)arg2 comboStatus:(unsigned long long)arg3 giftEvent:(FALCSelfSendGiftEvent *)arg4 unionId:(long long)arg5 receiverUserLogo:(NSString *)arg6;
- (void)sendAlbumGiftWithModel:(FALCNewRoomGiftModel *)arg1 giftNumStr:(NSString *)arg2 giftEvent:(FALCSelfSendGiftEvent *)arg3 unionId:(long long)arg4;
- (void)sendStorageGiftToUser:(FALCNewRoomGiftModel *)arg1 isToAnchor:(_Bool)arg2 giftNumStr:(NSString *)arg3 comboStatus:(unsigned long long)arg4 isQuickGift:(_Bool)arg5 unionId:(long long)arg6 receiverUserLogo:(NSString *)arg7;
- (void)sendStar:(long long)arg1;
- (void)refreshStarCount;
- (void)sendSongListStorageGiftWithSongId:(long long)arg1 giftModel:(FALCNewRoomGiftModel *)arg2 giftNumStr:(NSString *)arg3 unionId:(long long)arg4 receiverUserLogo:(NSString *)arg5;
- (void)sendSongListGiftWithSongId:(long long)arg1 giftModel:(FALCNewRoomGiftModel *)arg2 giftNumStr:(NSString *)arg3 unionId:(long long)arg4 receiverUserLogo:(NSString *)arg5;
@end

