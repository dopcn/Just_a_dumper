//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString, ZDGamePveMissionlistMissionsItem;
@protocol Optional;

@interface HLMapLeveModel : JSONModel
{
    long long _currentLeve;
    long long _misionId;
    long long _type;
    NSString *_misionName;
    NSString *_misionImageName;
    NSString *_completeImage;
    NSString *_lockImage;
    long long _animationCount;
    double _x;
    double _y;
    double _w;
    double _h;
    double _edgeT;
    double _edgeL;
    double _edgeB;
    double _edgeR;
    double _labelW;
    NSArray *_correlationArr;
    HLMapLeveModel *_friendLeveModel;
    ZDGamePveMissionlistMissionsItem<Optional> *_missionItem;
}

@property(retain, nonatomic) ZDGamePveMissionlistMissionsItem<Optional> *missionItem; // @synthesize missionItem=_missionItem;
@property(retain, nonatomic) HLMapLeveModel *friendLeveModel; // @synthesize friendLeveModel=_friendLeveModel;
@property(retain, nonatomic) NSArray *correlationArr; // @synthesize correlationArr=_correlationArr;
@property(nonatomic) double labelW; // @synthesize labelW=_labelW;
@property(nonatomic) double edgeR; // @synthesize edgeR=_edgeR;
@property(nonatomic) double edgeB; // @synthesize edgeB=_edgeB;
@property(nonatomic) double edgeL; // @synthesize edgeL=_edgeL;
@property(nonatomic) double edgeT; // @synthesize edgeT=_edgeT;
@property(nonatomic) double h; // @synthesize h=_h;
@property(nonatomic) double w; // @synthesize w=_w;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property(copy, nonatomic) NSString *lockImage; // @synthesize lockImage=_lockImage;
@property(copy, nonatomic) NSString *completeImage; // @synthesize completeImage=_completeImage;
@property(copy, nonatomic) NSString *misionImageName; // @synthesize misionImageName=_misionImageName;
@property(copy, nonatomic) NSString *misionName; // @synthesize misionName=_misionName;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long misionId; // @synthesize misionId=_misionId;
@property(nonatomic) long long currentLeve; // @synthesize currentLeve=_currentLeve;
- (void).cxx_destruct;
- (id)initWithDataID:(long long)arg1 currentLeve:(long long)arg2 misionName:(id)arg3 misionImageName:(id)arg4 completeImage:(id)arg5 lockImage:(id)arg6 animation:(long long)arg7 x:(double)arg8 y:(double)arg9 w:(double)arg10 h:(double)arg11 edgeT:(double)arg12 edgeL:(double)arg13 edgeB:(double)arg14 edgeR:(double)arg15 labelW:(double)arg16 modelType:(long long)arg17 correlationArr:(id)arg18;

@end

