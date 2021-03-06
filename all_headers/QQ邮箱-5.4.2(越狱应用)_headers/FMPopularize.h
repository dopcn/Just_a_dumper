//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMCachedObject.h"

@class FMPopularizeAppConfig, NSMutableArray, NSString;

@interface FMPopularize : FMCachedObject
{
    _Bool _needQQAccount;
    _Bool _reset;
    _Bool _configHead;
    _Bool _configTool;
    _Bool _configMail;
    _Bool _configAdMark;
    _Bool _needWifi;
    _Bool _isStop;
    _Bool _isClicked;
    _Bool _isCanceled;
    _Bool _isExpired;
    _Bool _isImageDone;
    _Bool _isSubImageDone;
    _Bool _avatarImageDone;
    _Bool _isShowed;
    _Bool _isCovered;
    _Bool _isShownAsApplication;
    int _type;
    int _page;
    int _bannerPosition;
    int _showType;
    int _action;
    int _imageTimes;
    int _appAction;
    int _condition;
    int _resourceType;
    int _displayType;
    long long _svrId;
    long long _reportId;
    NSString *_imageUrl;
    NSString *_imageMd5;
    NSString *_openUrl;
    double _startTime;
    double _endTime;
    NSString *_subject;
    NSString *_abstract;
    NSString *_content;
    NSString *_subInformation;
    NSString *_subImageUrl;
    NSString *_subImageMd5;
    NSString *_avatarImageMd5;
    unsigned long long _sessionType;
    double _bannerHeight;
    double _duration;
    NSString *_appScheme;
    double _weight;
    NSMutableArray *_subItems;
    FMPopularizeAppConfig *_appConfig;
    long long _relatedId;
    long long _productId;
    long long _turnId;
    NSString *_fromEmail;
    NSString *_fromNick;
    NSString *_adxml;
    NSString *_subFrom;
    NSString *_subSubject;
    NSString *_subAbstarct;
    NSString *_avatarUrl;
    double _showTime;
    long long _greetingCardId;
    NSString *_extraInfo;
    NSMutableArray *_appropriateSubItems;
}

+ (id)defaultValues;
+ (id)columnMapping;
+ (id)primaryKey;
+ (id)tableName;
+ (id)dbName;
+ (id)instanceObject;
@property(retain, nonatomic) NSMutableArray *appropriateSubItems; // @synthesize appropriateSubItems=_appropriateSubItems;
@property(copy, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) long long greetingCardId; // @synthesize greetingCardId=_greetingCardId;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(nonatomic) _Bool isShownAsApplication; // @synthesize isShownAsApplication=_isShownAsApplication;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(nonatomic) _Bool isCovered; // @synthesize isCovered=_isCovered;
@property(nonatomic) _Bool isShowed; // @synthesize isShowed=_isShowed;
@property(nonatomic) _Bool avatarImageDone; // @synthesize avatarImageDone=_avatarImageDone;
@property(nonatomic) _Bool isSubImageDone; // @synthesize isSubImageDone=_isSubImageDone;
@property(nonatomic) _Bool isImageDone; // @synthesize isImageDone=_isImageDone;
@property(nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) _Bool isClicked; // @synthesize isClicked=_isClicked;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *subAbstarct; // @synthesize subAbstarct=_subAbstarct;
@property(copy, nonatomic) NSString *subSubject; // @synthesize subSubject=_subSubject;
@property(copy, nonatomic) NSString *subFrom; // @synthesize subFrom=_subFrom;
@property(retain, nonatomic) NSString *adxml; // @synthesize adxml=_adxml;
@property(nonatomic) _Bool isStop; // @synthesize isStop=_isStop;
@property(nonatomic) _Bool needWifi; // @synthesize needWifi=_needWifi;
@property(nonatomic) _Bool configAdMark; // @synthesize configAdMark=_configAdMark;
@property(nonatomic) _Bool configMail; // @synthesize configMail=_configMail;
@property(nonatomic) _Bool configTool; // @synthesize configTool=_configTool;
@property(nonatomic) _Bool configHead; // @synthesize configHead=_configHead;
@property(copy, nonatomic) NSString *fromNick; // @synthesize fromNick=_fromNick;
@property(copy, nonatomic) NSString *fromEmail; // @synthesize fromEmail=_fromEmail;
@property(nonatomic) long long turnId; // @synthesize turnId=_turnId;
@property(nonatomic) long long productId; // @synthesize productId=_productId;
@property(nonatomic) long long relatedId; // @synthesize relatedId=_relatedId;
@property(nonatomic) _Bool reset; // @synthesize reset=_reset;
@property(nonatomic) int resourceType; // @synthesize resourceType=_resourceType;
@property(nonatomic) int condition; // @synthesize condition=_condition;
@property(retain, nonatomic) FMPopularizeAppConfig *appConfig; // @synthesize appConfig=_appConfig;
@property(retain, nonatomic) NSMutableArray *subItems; // @synthesize subItems=_subItems;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) int appAction; // @synthesize appAction=_appAction;
@property(copy, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
@property(nonatomic) int imageTimes; // @synthesize imageTimes=_imageTimes;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(nonatomic) unsigned long long sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) _Bool needQQAccount; // @synthesize needQQAccount=_needQQAccount;
@property(copy, nonatomic) NSString *avatarImageMd5; // @synthesize avatarImageMd5=_avatarImageMd5;
@property(copy, nonatomic) NSString *subImageMd5; // @synthesize subImageMd5=_subImageMd5;
@property(copy, nonatomic) NSString *subImageUrl; // @synthesize subImageUrl=_subImageUrl;
@property(copy, nonatomic) NSString *subInformation; // @synthesize subInformation=_subInformation;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *abstract; // @synthesize abstract=_abstract;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(copy, nonatomic) NSString *imageMd5; // @synthesize imageMd5=_imageMd5;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(nonatomic) int bannerPosition; // @synthesize bannerPosition=_bannerPosition;
@property(nonatomic) int page; // @synthesize page=_page;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) long long reportId; // @synthesize reportId=_reportId;
@property(nonatomic) long long svrId; // @synthesize svrId=_svrId;
- (void).cxx_destruct;
- (_Bool)isOnTurn;
- (void)setExtraInfoDict:(id)arg1;
- (id)extraInfoDict;
- (_Bool)isAvatarDownload;
- (_Bool)isSubImageDownload;
- (_Bool)isImageDownload;
- (_Bool)isAdPopularizeStopShow;
- (_Bool)isGreetingCardPopularize;
- (_Bool)hasGreetingBirthdayRedDot;
- (id)genImageFilePath:(id)arg1;
- (id)notShowsEntranceKey;
- (id)displayTypeKey;
- (id)debugDescription;
- (void)setShowsEntrance:(_Bool)arg1;
- (_Bool)isShowsEntrance;
- (void)forceSetDisplayType:(int)arg1;
- (_Bool)shouldDisplayInHome;
- (_Bool)wakeUpAppScheme;
- (long long)getBoxPopularizeSvrCnt;
- (_Bool)showLeftImage;
- (double)getImageScale;
- (id)avatarImagePath;
- (id)subImagePath;
- (id)imagePath;
- (id)avatarImageData;
- (id)subImageData;
- (id)imageData;
- (_Bool)isEqual:(id)arg1;

@end

