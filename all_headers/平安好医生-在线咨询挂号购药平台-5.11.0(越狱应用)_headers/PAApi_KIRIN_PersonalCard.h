//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PAApi_KIRIN_PersonalCard : NSObject
{
    _Bool _isEffective;
    NSString *_cardNo;
    long long _buyerId;
    long long _activeUserId;
    long long _itemId;
    NSString *_cardName;
    long long _gmtEffectEnd;
    NSString *_status;
    NSString *_QRcodeImgTFSkey;
    NSString *_cardStyle;
    NSMutableArray *_serveDefineList;
}

+ (id)deserialize:(id)arg1;
+ (id)deserializeWithJsonData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *serveDefineList; // @synthesize serveDefineList=_serveDefineList;
@property(retain, nonatomic) NSString *cardStyle; // @synthesize cardStyle=_cardStyle;
@property(retain, nonatomic) NSString *QRcodeImgTFSkey; // @synthesize QRcodeImgTFSkey=_QRcodeImgTFSkey;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) _Bool isEffective; // @synthesize isEffective=_isEffective;
@property(nonatomic) long long gmtEffectEnd; // @synthesize gmtEffectEnd=_gmtEffectEnd;
@property(retain, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(nonatomic) long long activeUserId; // @synthesize activeUserId=_activeUserId;
@property(nonatomic) long long buyerId; // @synthesize buyerId=_buyerId;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
- (void).cxx_destruct;
- (id)serialize;
- (id)init;

@end

