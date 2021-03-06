//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQPimCloudConfigurationBaseModel.h"

@class NSString;

@interface QQPimAdvertisementModel : QQPimCloudConfigurationBaseModel
{
    int _position;
    NSString *_title;
    NSString *_subTitle;
    NSString *_jumpURL;
    NSString *_downloadURL;
    NSString *_schema;
    NSString *_photoURL;
}

@property(nonatomic) int position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *photoURL; // @synthesize photoURL=_photoURL;
@property(copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isPhotoCompleted;
- (void)asyncGetPhotoWithCompletion:(CDUnknownBlockType)arg1;
- (id)photo;
- (void)scheduleImageDownloadTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldShowModel;

@end

