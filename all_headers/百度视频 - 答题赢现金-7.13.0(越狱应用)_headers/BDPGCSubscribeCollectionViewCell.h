//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface BDPGCSubscribeCollectionViewCell : UICollectionViewCell
{
    UILabel *_numLabel;
    UILabel *_nameLabel;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
- (void).cxx_destruct;
- (void)updateInfoWithModel:(id)arg1 index:(long long)arg2;
- (void)setLineIsHidden:(_Bool)arg1;
- (void)setSubviewsLayout;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

