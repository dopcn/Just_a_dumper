//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FALCNewGiftList, FAPKRoomGiftView, NSArray, NSMutableDictionary;

@interface FAPKRoomGiftManager : NSObject
{
    _Bool _isReload;
    FALCNewGiftList *_appGiftList;
    long long _roomId;
    NSArray *_classGiftList;
    NSArray *_giftList;
    long long _starKugouId;
    FAPKRoomGiftView *_pkRoomGiftView;
    NSMutableDictionary *_giftPriceInfo;
}

+ (id)getDefaultGiftCategory:(id)arg1;
+ (id)getDefaultGiftId:(id)arg1;
+ (void)writeGiftId:(id)arg1 category:(id)arg2 idKey:(id)arg3 categoryKey:(id)arg4;
+ (id)classGift;
+ (void)getGiftListWithRoomId:(long long)arg1 starKugouId:(long long)arg2 result:(CDUnknownBlockType)arg3;
+ (void)getGiftListWithRoomId:(long long)arg1 kugouId:(long long)arg2 result:(CDUnknownBlockType)arg3;
+ (void)getGiftListAndClassWithRoomId:(long long)arg1 kugouId:(long long)arg2 result:(CDUnknownBlockType)arg3;
+ (void)updateRoomId:(long long)arg1 starKugouId:(long long)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *giftPriceInfo; // @synthesize giftPriceInfo=_giftPriceInfo;
@property(retain, nonatomic) FAPKRoomGiftView *pkRoomGiftView; // @synthesize pkRoomGiftView=_pkRoomGiftView;
@property(nonatomic) long long starKugouId; // @synthesize starKugouId=_starKugouId;
@property(nonatomic) _Bool isReload; // @synthesize isReload=_isReload;
@property(retain, nonatomic) NSArray *giftList; // @synthesize giftList=_giftList;
@property(retain, nonatomic) NSArray *classGiftList; // @synthesize classGiftList=_classGiftList;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) FALCNewGiftList *appGiftList; // @synthesize appGiftList=_appGiftList;
- (void).cxx_destruct;
- (id)pkGiftViewWithId:(long long)arg1 kugouId:(long long)arg2 name:(id)arg3 roomId:(long long)arg4 frame:(struct CGRect)arg5 fullStatus:(long long)arg6;
- (id)localCacheGiftList;
- (void)cacheNormalGiftListData:(id)arg1;
- (void)updateGiftList;
- (void)asyncGetGiftListWithRoomId:(long long)arg1 kugouId:(long long)arg2;
- (id)init;

@end

