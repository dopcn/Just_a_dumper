//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ThirdControlFramework/JSONModel.h>

@class NSString;

@interface TravelVideoClipTable : JSONModel
{
    NSString *_cid;
    NSString *_jid;
    unsigned long long _status;
    NSString *_data;
    NSString *_video_url;
    NSString *_video_id;
}

@property(copy, nonatomic) NSString *video_id; // @synthesize video_id=_video_id;
@property(copy, nonatomic) NSString *video_url; // @synthesize video_url=_video_url;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *jid; // @synthesize jid=_jid;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (id)initWithClip:(id)arg1 jId:(id)arg2;

@end

