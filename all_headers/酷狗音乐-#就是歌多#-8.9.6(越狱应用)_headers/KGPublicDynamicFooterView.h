//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KGPublicControlButton, KGPublicEntity, KGThemeLabel, KGThemeLine;

@interface KGPublicDynamicFooterView : UIView
{
    KGPublicControlButton *_btnLikeArea;
    KGThemeLabel *_descLabel;
    KGThemeLine *_line;
    KGPublicControlButton *_btnCommentArea;
    KGPublicControlButton *_btnShareArea;
    KGPublicEntity *_entity;
}

+ (double)viewHeight:(id)arg1;
@property(retain, nonatomic) KGPublicEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) KGPublicControlButton *btnShareArea; // @synthesize btnShareArea=_btnShareArea;
@property(retain, nonatomic) KGPublicControlButton *btnCommentArea; // @synthesize btnCommentArea=_btnCommentArea;
@property(retain, nonatomic) KGThemeLine *line; // @synthesize line=_line;
@property(retain, nonatomic) KGThemeLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) KGPublicControlButton *btnLikeArea; // @synthesize btnLikeArea=_btnLikeArea;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

