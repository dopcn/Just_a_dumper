//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FALCFXGiftBLL : NSObject
{
}

+ (void)getPKRoomGiftListWithRoomId:(long long)arg1 type:(long long)arg2 starKugouId:(long long)arg3 result:(CDUnknownBlockType)arg4;
+ (void)sendStorageGiftId:(long long)arg1 toId:(long long)arg2 price:(long long)arg3 number:(long long)arg4 roomId:(long long)arg5 isCustom:(_Bool)arg6 isPKGift:(_Bool)arg7 continueGiftType:(long long)arg8 succeed:(CDUnknownBlockType)arg9 fail:(CDUnknownBlockType)arg10;
+ (void)sendAlbumGiftwithtoId:(long long)arg1 withgiftId:(int)arg2 withnum:(int)arg3 withroomId:(int)arg4 withalbumId:(id)arg5 withisBuy:(int)arg6 withPKGift:(int)arg7 succeed:(CDUnknownBlockType)arg8 fail:(CDUnknownBlockType)arg9;
+ (void)sendStarWithId:(long long)arg1 toId:(long long)arg2 num:(unsigned long long)arg3 roomId:(long long)arg4 isCustom:(long long)arg5 isPKGift:(long long)arg6 succeed:(CDUnknownBlockType)arg7 fail:(CDUnknownBlockType)arg8;
+ (void)sendBigGiftWithId:(long long)arg1 toId:(long long)arg2 num:(unsigned long long)arg3 roomId:(long long)arg4 isCustom:(long long)arg5 price:(long long)arg6 isPKGift:(long long)arg7 continueGiftType:(long long)arg8 succeed:(CDUnknownBlockType)arg9 fail:(CDUnknownBlockType)arg10;
+ (void)sendLowPriceGiftWithId:(long long)arg1 toId:(unsigned long long)arg2 num:(unsigned long long)arg3 roomId:(long long)arg4 isCustom:(long long)arg5 price:(long long)arg6 isPKGift:(long long)arg7 continueGiftType:(long long)arg8 successBlock:(CDUnknownBlockType)arg9 fail:(CDUnknownBlockType)arg10;

@end

