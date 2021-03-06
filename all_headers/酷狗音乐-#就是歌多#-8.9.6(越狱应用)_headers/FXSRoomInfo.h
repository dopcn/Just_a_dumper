//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class FXHomeCollectionInfo, NSString;

@interface FXSRoomInfo : FXBaseJSONModel
{
    _Bool _isHasSubscribe;
    _Bool _isSing;
    _Bool _local_isConcern;
    _Bool _local_hourRank;
    _Bool _isSinger;
    _Bool _isPk;
    int _roomId;
    int _userId;
    int _status;
    int _isHifi;
    int _isInterviewRoom;
    int _richLevel;
    int _starLevel;
    int _kugouId;
    int _isMobileLive;
    int _isOriginal;
    int _isHotStar;
    NSString *_imgPath;
    unsigned long long _viewerNum;
    NSString *_nickName;
    NSString *_songName;
    NSString *_photoPath;
    double _lastOnlineTime;
    long long _cityId;
    NSString *_cityName;
    NSString *_userLogo;
    NSString *_company;
    NSString *_activityImg;
    NSString *_activityPic;
    NSString *_liveTopic;
    NSString *_liveTitle;
    NSString *_title;
    double _distance;
    FXHomeCollectionInfo *_local_collectionInfo;
    FXHomeCollectionInfo *_pk_collectionInfo;
    long long _source;
    long long _position;
    long long _liveRecent;
}

+ (id)convernPKRoomInfoToStarInfo:(id)arg1;
+ (id)convernRoomInfoToStarInfo:(id)arg1;
+ (id)getInfoFromStarInfo:(id)arg1;
+ (id)getInfoFromRoomInfoModel:(id)arg1;
@property(nonatomic) _Bool isPk; // @synthesize isPk=_isPk;
@property(nonatomic) long long liveRecent; // @synthesize liveRecent=_liveRecent;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) _Bool isSinger; // @synthesize isSinger=_isSinger;
@property(retain, nonatomic) FXHomeCollectionInfo *pk_collectionInfo; // @synthesize pk_collectionInfo=_pk_collectionInfo;
@property(retain, nonatomic) FXHomeCollectionInfo *local_collectionInfo; // @synthesize local_collectionInfo=_local_collectionInfo;
@property(nonatomic) _Bool local_hourRank; // @synthesize local_hourRank=_local_hourRank;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) _Bool local_isConcern; // @synthesize local_isConcern=_local_isConcern;
@property(nonatomic) _Bool isSing; // @synthesize isSing=_isSing;
@property(nonatomic) int isHotStar; // @synthesize isHotStar=_isHotStar;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *liveTitle; // @synthesize liveTitle=_liveTitle;
@property(retain, nonatomic) NSString *liveTopic; // @synthesize liveTopic=_liveTopic;
@property(nonatomic) int isOriginal; // @synthesize isOriginal=_isOriginal;
@property(nonatomic) int isMobileLive; // @synthesize isMobileLive=_isMobileLive;
@property(retain, nonatomic) NSString *activityPic; // @synthesize activityPic=_activityPic;
@property(retain, nonatomic) NSString *activityImg; // @synthesize activityImg=_activityImg;
@property(nonatomic) int kugouId; // @synthesize kugouId=_kugouId;
@property(nonatomic) int starLevel; // @synthesize starLevel=_starLevel;
@property(nonatomic) int richLevel; // @synthesize richLevel=_richLevel;
@property(retain, nonatomic) NSString *company; // @synthesize company=_company;
@property(retain, nonatomic) NSString *userLogo; // @synthesize userLogo=_userLogo;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) long long cityId; // @synthesize cityId=_cityId;
@property(nonatomic) double lastOnlineTime; // @synthesize lastOnlineTime=_lastOnlineTime;
@property(retain, nonatomic) NSString *photoPath; // @synthesize photoPath=_photoPath;
@property(nonatomic) int isInterviewRoom; // @synthesize isInterviewRoom=_isInterviewRoom;
@property(nonatomic) _Bool isHasSubscribe; // @synthesize isHasSubscribe=_isHasSubscribe;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(nonatomic) int isHifi; // @synthesize isHifi=_isHifi;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned long long viewerNum; // @synthesize viewerNum=_viewerNum;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *imgPath; // @synthesize imgPath=_imgPath;
@property(nonatomic) int userId; // @synthesize userId=_userId;
@property(nonatomic) int roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (id)get16Per10ImgPath;

@end

