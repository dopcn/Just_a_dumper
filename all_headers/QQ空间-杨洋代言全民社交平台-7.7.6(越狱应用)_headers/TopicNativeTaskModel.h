//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavoriteNativeTaskModel.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface TopicNativeTaskModel : FavoriteNativeTaskModel <NSCoding>
{
    _Bool _synQzone;
    NSString *_topicId;
    NSString *_lbsName;
    NSString *_lbsAddress;
    long long _lbsid;
    NSString *_s_lbsid;
    double _lbsCoord[3];
    int _poiType;
    int _poiPosition;
    int _poiOrderType;
    int _lbsType;
    NSString *_strDianPingId;
    NSString *_h5Opertext;
    NSArray *_publishPicInfos;
}

@property(retain, nonatomic) NSArray *publishPicInfos; // @synthesize publishPicInfos=_publishPicInfos;
@property(retain, nonatomic) NSString *h5Opertext; // @synthesize h5Opertext=_h5Opertext;
@property(retain, nonatomic) NSString *strDianPingId; // @synthesize strDianPingId=_strDianPingId;
@property(nonatomic) int lbsType; // @synthesize lbsType=_lbsType;
@property(nonatomic) int poiOrderType; // @synthesize poiOrderType=_poiOrderType;
@property(nonatomic) int poiPosition; // @synthesize poiPosition=_poiPosition;
@property(nonatomic) int poiType; // @synthesize poiType=_poiType;
@property(retain, nonatomic) NSString *s_lbsid; // @synthesize s_lbsid=_s_lbsid;
@property(nonatomic) long long lbsid; // @synthesize lbsid=_lbsid;
@property(retain, nonatomic) NSString *lbsAddress; // @synthesize lbsAddress=_lbsAddress;
@property(retain, nonatomic) NSString *lbsName; // @synthesize lbsName=_lbsName;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(nonatomic) _Bool synQzone; // @synthesize synQzone=_synQzone;
- (void).cxx_destruct;
- (id)taskOptName;
- (id)titleText;
- (id)operText;
- (double *)getLBSCoord;
- (void)setLbsCoord:(double *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

