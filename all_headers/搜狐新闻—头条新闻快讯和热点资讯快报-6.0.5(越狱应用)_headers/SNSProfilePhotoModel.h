//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNSBaseEntity.h"

@class NSString, SnsVideoModel;

@interface SNSProfilePhotoModel : SNSBaseEntity
{
    float _w;
    float _h;
    float _tw;
    float _th;
    long long _type;
    NSString *_p;
    NSString *_tp;
    double _score;
    SnsVideoModel *_videoModel;
    NSString *_feedId;
}

@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) SnsVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *tp; // @synthesize tp=_tp;
@property(retain, nonatomic) NSString *p; // @synthesize p=_p;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) float th; // @synthesize th=_th;
@property(nonatomic) float tw; // @synthesize tw=_tw;
@property(nonatomic) float h; // @synthesize h=_h;
@property(nonatomic) float w; // @synthesize w=_w;
- (void).cxx_destruct;
- (_Bool)isVideoModel;
- (void)loadWithDic:(id)arg1;

@end

