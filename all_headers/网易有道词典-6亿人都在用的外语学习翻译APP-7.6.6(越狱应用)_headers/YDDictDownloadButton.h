//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YDHomePageButton.h"

@class CAShapeLayer;

@interface YDDictDownloadButton : YDHomePageButton
{
    unsigned long long _downloadState;
    double _progress;
    CAShapeLayer *_shapeLayer;
}

+ (id)buttonWithType:(long long)arg1;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long downloadState; // @synthesize downloadState=_downloadState;
- (void).cxx_destruct;
- (void)setupViews;
- (id)init;

@end

