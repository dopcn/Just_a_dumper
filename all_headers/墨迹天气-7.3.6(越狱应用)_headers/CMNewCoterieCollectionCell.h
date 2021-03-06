//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CMCoterieIconCellObject, MJBadgeView, UIButton, UILabel;

@interface CMNewCoterieCollectionCell : UICollectionViewCell
{
    CMCoterieIconCellObject *_object;
    UIButton *_coterieButton;
    UILabel *_coterieLabel;
    MJBadgeView *_coterieV;
}

@property(retain, nonatomic) MJBadgeView *coterieV; // @synthesize coterieV=_coterieV;
@property(retain, nonatomic) UILabel *coterieLabel; // @synthesize coterieLabel=_coterieLabel;
@property(retain, nonatomic) UIButton *coterieButton; // @synthesize coterieButton=_coterieButton;
@property(retain, nonatomic) CMCoterieIconCellObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateCoterieBadge;
- (_Bool)isHasBadge:(id)arg1;
- (void)p_updateCoterieViewByKeyName:(id)arg1;
- (void)p_clickedBtn:(id)arg1;
- (void)p_buildConstraint;
- (void)p_buildCoterieBadgeView;
- (void)p_buildCoterieLabel;
- (void)p_buildCoterieButton;
- (void)p_buildViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

