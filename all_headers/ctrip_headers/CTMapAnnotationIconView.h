//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTMapBaseAnnotationViewV2.h"

@class UIImageView, UILabel;

@interface CTMapAnnotationIconView : CTMapBaseAnnotationViewV2
{
    UIImageView *_icon;
    UILabel *_numberLabel;
}

@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)colorForIconType:(int)arg1;
- (void)annotaionDeselected:(id)arg1;
- (void)annotaionSelected:(id)arg1;
- (void)updateWithAnnotation:(id)arg1;
- (void)setInformationWithAnnotation:(id)arg1;

@end

