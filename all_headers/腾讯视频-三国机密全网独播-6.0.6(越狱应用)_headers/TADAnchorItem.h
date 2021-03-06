//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TADAnchorItem : NSObject
{
    long long _anchorId;
    long long _ruleId;
    long long _anchorType;
    double _pos_x;
    double _pos_y;
    double _pos_w;
    double _pos_h;
    double _ratio;
    double _begin;
    double _interval;
    double _end;
    long long _errorCode;
}

+ (id)parseAnchorInfo:(id)arg1;
+ (id)initWithDic:(id)arg1;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) double begin; // @synthesize begin=_begin;
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(nonatomic) double pos_h; // @synthesize pos_h=_pos_h;
@property(nonatomic) double pos_w; // @synthesize pos_w=_pos_w;
@property(nonatomic) double pos_y; // @synthesize pos_y=_pos_y;
@property(nonatomic) double pos_x; // @synthesize pos_x=_pos_x;
@property(nonatomic) long long anchorType; // @synthesize anchorType=_anchorType;
@property(nonatomic) long long ruleId; // @synthesize ruleId=_ruleId;
@property(nonatomic) long long anchorId; // @synthesize anchorId=_anchorId;

@end

