//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol GJGCOCPublishTaskDelegate;

@interface GJGCOCPublishTask : NSObject
{
    NSString *_uniqueIdentifier;
    unsigned long long _taskState;
    NSString *_content;
    NSString *_userid;
    NSString *_user_name;
    NSString *_user_avatar;
    NSString *_curCityId;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_activity_id;
    NSString *_company_ids;
    NSString *_user_category;
    id <GJGCOCPublishTaskDelegate> _delegate;
    NSMutableArray *_imageUploadTaskArray;
    NSMutableDictionary *_imageUrlQueue;
    NSMutableDictionary *_imageAssetsUploadTaskQueue;
    NSMutableArray *_imageSortedKeyArray;
}

+ (id)currentTimeStamp;
@property(retain, nonatomic) NSMutableArray *imageSortedKeyArray; // @synthesize imageSortedKeyArray=_imageSortedKeyArray;
@property(retain, nonatomic) NSMutableDictionary *imageAssetsUploadTaskQueue; // @synthesize imageAssetsUploadTaskQueue=_imageAssetsUploadTaskQueue;
@property(retain, nonatomic) NSMutableDictionary *imageUrlQueue; // @synthesize imageUrlQueue=_imageUrlQueue;
@property(retain, nonatomic) NSMutableArray *imageUploadTaskArray; // @synthesize imageUploadTaskArray=_imageUploadTaskArray;
@property(nonatomic) __weak id <GJGCOCPublishTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *user_category; // @synthesize user_category=_user_category;
@property(retain, nonatomic) NSString *company_ids; // @synthesize company_ids=_company_ids;
@property(retain, nonatomic) NSString *activity_id; // @synthesize activity_id=_activity_id;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *curCityId; // @synthesize curCityId=_curCityId;
@property(retain, nonatomic) NSString *user_avatar; // @synthesize user_avatar=_user_avatar;
@property(retain, nonatomic) NSString *user_name; // @synthesize user_name=_user_name;
@property(retain, nonatomic) NSString *userid; // @synthesize userid=_userid;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, nonatomic) unsigned long long taskState; // @synthesize taskState=_taskState;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (id)imageTaskArray;
- (id)imageUploadTaskWithAsset:(id)arg1;
- (void)imageUploadTasksResultBlock:(CDUnknownBlockType)arg1;
- (void)imageUploadTaskFailed;
- (void)imageUploadTask:(id)arg1 completeResult:(id)arg2;
- (void)startUpload:(id)arg1;
- (void)publish;
- (void)netStatusNoneToReach;
- (void)imageUploadManagerSetting;
- (void)uploadImages;
- (void)cancel;
- (void)start;
- (void)cancelImageUploadAsset:(id)arg1;
- (void)addImageUploadAsset:(id)arg1;
- (void)cancelImageUploadAssets:(id)arg1;
- (void)addImageUploadAssets:(id)arg1;
- (_Bool)hasImageTask;
- (void)dealloc;
- (id)init;

@end

