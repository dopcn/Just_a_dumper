//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KWPictureComponentView.h"

@protocol KWPicChangeViewDelegate;

@interface KWPicChangeView : KWPictureComponentView
{
    id <KWPicChangeViewDelegate> _delegate;
}

@property(nonatomic) __weak id <KWPicChangeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setButtonsEnable:(_Bool)arg1;
- (void)touchedPicDelete:(id)arg1;
- (void)touchePicChange:(id)arg1;
- (void)setButtonsAction;
- (void)setButtonsText;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

