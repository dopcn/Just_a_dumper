//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IFDataModel.h"

@class NSArray, NSDictionary, NSString;

@interface VideoDemandDataSource : IFDataModel
{
    NSString *_dataURL;
    NSDictionary *_dic_singleVideoInfo;
    NSArray *_hottst1;
    NSDictionary *_comments;
    long long _comment_count;
}

@property(nonatomic) long long comment_count; // @synthesize comment_count=_comment_count;
@property(retain, nonatomic) NSDictionary *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) NSArray *hottst1; // @synthesize hottst1=_hottst1;
@property(retain, nonatomic) NSDictionary *dic_singleVideoInfo; // @synthesize dic_singleVideoInfo=_dic_singleVideoInfo;
@property(retain, nonatomic) NSString *dataURL; // @synthesize dataURL=_dataURL;
- (void).cxx_destruct;
- (long long)commentAllWithUrl:(id)arg1;
- (void)getCommentsWithGuid:(id)arg1 withblock:(CDUnknownBlockType)arg2;
- (id)videoLengthFormat;
- (id)videoPublishTimeAndCP;
- (id)lastPlayedTime;
- (id)collect;
- (id)columnID;
- (id)_CP;
- (id)largeImgURL;
- (id)longTitle;
- (id)videoURLHigh;
- (long long)videoDuration;
- (id)videoLength;
- (id)videoURLMid;
- (id)title;
- (id)statisticID;
- (id)_id;
- (id)shareURL;
- (id)videoPublishData;
- (id)videoPublishTime;
- (id)videoSizeHigh;
- (id)videoSizeLow;
- (id)videoURLLow;
- (id)richText;
- (id)playTimes;
- (id)audioURL;
- (id)smallImgURL;
- (id)imgURL;
- (id)videoSizeMid;
- (id)GUID;
- (id)init;

@end

