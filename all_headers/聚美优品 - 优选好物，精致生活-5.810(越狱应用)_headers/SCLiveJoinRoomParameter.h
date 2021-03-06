//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SCLiveJoinRoomParameter : NSObject
{
    _Bool _minWindow;
    _Bool _mute;
    _Bool _showFailInfo;
    _Bool _showMinCloseBtn;
    NSString *_anchorID;
    NSString *_tabCode;
    long long _fromType;
    id _userInfo;
}

+ (id)joinRoomParameterWithAnchorID:(id)arg1 tabCode:(id)arg2;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) _Bool showMinCloseBtn; // @synthesize showMinCloseBtn=_showMinCloseBtn;
@property(nonatomic) _Bool showFailInfo; // @synthesize showFailInfo=_showFailInfo;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) _Bool minWindow; // @synthesize minWindow=_minWindow;
@property(copy, nonatomic) NSString *tabCode; // @synthesize tabCode=_tabCode;
@property(copy, nonatomic) NSString *anchorID; // @synthesize anchorID=_anchorID;
- (void).cxx_destruct;
- (id)analyzeParameters;
- (void)configGoodsDetailModel;
- (void)configSpecialtyMarketMode;
- (id)init;

@end

