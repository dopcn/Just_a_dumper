//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface CTTrainBookTransitInfoView : UIView
{
    UIView *_viewBlue;
    UIView *_viewContent;
    UILabel *_labelZhuanIcon;
    UILabel *_labelTrip;
    UIImageView *_imageInfo;
    UILabel *_labelDetail;
}

@property(retain, nonatomic) UILabel *labelDetail; // @synthesize labelDetail=_labelDetail;
@property(retain, nonatomic) UIImageView *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(retain, nonatomic) UILabel *labelTrip; // @synthesize labelTrip=_labelTrip;
@property(retain, nonatomic) UILabel *labelZhuanIcon; // @synthesize labelZhuanIcon=_labelZhuanIcon;
@property(retain, nonatomic) UIView *viewContent; // @synthesize viewContent=_viewContent;
@property(retain, nonatomic) UIView *viewBlue; // @synthesize viewBlue=_viewBlue;
- (void).cxx_destruct;
- (void)setupContentWithTrip:(id)arg1;
- (void)awakeFromNib;

@end

