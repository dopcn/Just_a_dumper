//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EasyDBModel.h"

@class NSNumber, NSString;

@interface SCSMessagePO : EasyDBModel
{
    NSString *_uuid;
    NSString *_mid;
    NSString *_type;
    NSString *_fromPin;
    NSString *_fromApp;
    NSString *_fromClientType;
    NSString *_toPin;
    NSString *_toApp;
    NSString *_toClientType;
    NSString *_venderId;
    NSString *_chatInfo;
    NSString *_createFrom;
    NSString *_msgRaw;
    NSString *_bodyType;
    NSString *_text;
    NSString *_remoteUrlPath;
    NSString *_remoteImgThumbnailPath;
    NSString *_localUrlPath;
    NSString *_localThumbUrlPath;
    NSString *_rawUrlPath;
    NSNumber *_needUploadOrigin;
    NSString *_duration;
    NSNumber *_picWidth;
    NSNumber *_picHeight;
    NSNumber *_state;
    NSNumber *_readed;
    NSNumber *_direction;
    NSString *_version;
    NSNumber *_createTime;
    long long _serverTime;
    NSNumber *_modifyTime;
    NSNumber *_removed;
}

+ (id)fetchLastMsg;
+ (unsigned long long)fetchAllUnReadCount;
+ (id)EA_LoadPage:(unsigned long long)arg1 pageSize:(unsigned long long)arg2 where:(id)arg3 sortBy:(id)arg4 desc:(_Bool)arg5;
+ (id)EA_LoadPage:(unsigned long long)arg1 pageSize:(unsigned long long)arg2 sortBy:(id)arg3 desc:(_Bool)arg4;
+ (id)EA_FindFirstWithValue:(id)arg1 Property:(id)arg2;
+ (id)EA_FindFirstWithSelectFromSql:(id)arg1;
+ (id)EA_FindAllWithValue:(id)arg1 Property:(id)arg2;
+ (id)EA_FindWithWhereSql:(id)arg1;
+ (id)EA_FindOrCreateWithValue:(id)arg1 Property:(id)arg2;
+ (id)EA_LoadAll;
+ (id)createFromWithType:(long long)arg1;
+ (id)defaultHelloPOWithCtInfo:(id)arg1;
+ (id)defaultPOWithCtInfo:(id)arg1;
@property(retain, nonatomic) NSNumber *removed; // @synthesize removed=_removed;
@property(retain, nonatomic) NSNumber *modifyTime; // @synthesize modifyTime=_modifyTime;
@property(nonatomic) long long serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSNumber *direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSNumber *readed; // @synthesize readed=_readed;
@property(retain, nonatomic) NSNumber *state; // @synthesize state=_state;
@property(retain, nonatomic) NSNumber *picHeight; // @synthesize picHeight=_picHeight;
@property(retain, nonatomic) NSNumber *picWidth; // @synthesize picWidth=_picWidth;
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *needUploadOrigin; // @synthesize needUploadOrigin=_needUploadOrigin;
@property(retain, nonatomic) NSString *rawUrlPath; // @synthesize rawUrlPath=_rawUrlPath;
@property(retain, nonatomic) NSString *localThumbUrlPath; // @synthesize localThumbUrlPath=_localThumbUrlPath;
@property(retain, nonatomic) NSString *localUrlPath; // @synthesize localUrlPath=_localUrlPath;
@property(retain, nonatomic) NSString *remoteImgThumbnailPath; // @synthesize remoteImgThumbnailPath=_remoteImgThumbnailPath;
@property(retain, nonatomic) NSString *remoteUrlPath; // @synthesize remoteUrlPath=_remoteUrlPath;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *bodyType; // @synthesize bodyType=_bodyType;
@property(retain, nonatomic) NSString *msgRaw; // @synthesize msgRaw=_msgRaw;
@property(retain, nonatomic) NSString *createFrom; // @synthesize createFrom=_createFrom;
@property(retain, nonatomic) NSString *chatInfo; // @synthesize chatInfo=_chatInfo;
@property(retain, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(retain, nonatomic) NSString *toClientType; // @synthesize toClientType=_toClientType;
@property(retain, nonatomic) NSString *toApp; // @synthesize toApp=_toApp;
@property(retain, nonatomic) NSString *toPin; // @synthesize toPin=_toPin;
@property(retain, nonatomic) NSString *fromClientType; // @synthesize fromClientType=_fromClientType;
@property(retain, nonatomic) NSString *fromApp; // @synthesize fromApp=_fromApp;
@property(retain, nonatomic) NSString *fromPin; // @synthesize fromPin=_fromPin;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)updateServerTimeCurrent;
- (id)fetchMsgContent;
- (id)needUpdateTemplate;
- (_Bool)EA_save;
- (id)h5ResultStrFormat;
- (id)h5ArrayFormat;
- (id)h5DictFormat;

@end

