//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TDCommonButton.h"

@class ButtonFrameModel;

@interface CustomFrameButton : TDCommonButton
{
    ButtonFrameModel *_buttonFrameModel;
}

@property(retain, nonatomic) ButtonFrameModel *buttonFrameModel; // @synthesize buttonFrameModel=_buttonFrameModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;

@end

