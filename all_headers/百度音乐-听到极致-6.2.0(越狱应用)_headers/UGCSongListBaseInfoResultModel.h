//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString, UGCSongListBaseInfoCollectorModel, UGCSongListBaseInfoInfoModel;
@protocol Optional;

@interface UGCSongListBaseInfoResultModel : JSONModel
{
    long long _song_num;
    long long _listen_num;
    long long _iscollect;
    long long _share_num;
    long long _comment_num;
    UGCSongListBaseInfoCollectorModel<Optional> *_collector;
    long long _have_more;
    long long _collect_num;
    NSArray *_songlist;
    NSString<Optional> *_share_url;
    UGCSongListBaseInfoInfoModel<Optional> *_info;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) UGCSongListBaseInfoInfoModel<Optional> *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString<Optional> *share_url; // @synthesize share_url=_share_url;
@property(retain, nonatomic) NSArray *songlist; // @synthesize songlist=_songlist;
@property(nonatomic) long long collect_num; // @synthesize collect_num=_collect_num;
@property(nonatomic) long long have_more; // @synthesize have_more=_have_more;
@property(retain, nonatomic) UGCSongListBaseInfoCollectorModel<Optional> *collector; // @synthesize collector=_collector;
@property(nonatomic) long long comment_num; // @synthesize comment_num=_comment_num;
@property(nonatomic) long long share_num; // @synthesize share_num=_share_num;
@property(nonatomic) long long iscollect; // @synthesize iscollect=_iscollect;
@property(nonatomic) long long listen_num; // @synthesize listen_num=_listen_num;
@property(nonatomic) long long song_num; // @synthesize song_num=_song_num;
- (void).cxx_destruct;

@end

