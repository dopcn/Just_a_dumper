//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UITapGestureRecognizer;

@interface DRCGoEditBtnView : UIView
{
    UIView *_topLine;
    UILabel *_titleLbl;
    UIImageView *_arrowImgView;
    UITapGestureRecognizer *_click;
}

@property(retain, nonatomic) UITapGestureRecognizer *click; // @synthesize click=_click;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
- (void).cxx_destruct;
- (void)makeConstraints;
- (id)initWithLine:(_Bool)arg1;

@end

