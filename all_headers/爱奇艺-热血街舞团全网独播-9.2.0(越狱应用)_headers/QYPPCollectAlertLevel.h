//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPCollectAlertComponent.h"

@class QYPPFansLevelLabel, UILabel;

@interface QYPPCollectAlertLevel : QYPPCollectAlertComponent
{
    QYPPFansLevelLabel *_fansLevel;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) QYPPFansLevelLabel *fansLevel; // @synthesize fansLevel=_fansLevel;
- (void).cxx_destruct;
- (void)layOut;
- (void)setData:(id)arg1 wallInfo:(id)arg2;
- (void)initView;

@end

