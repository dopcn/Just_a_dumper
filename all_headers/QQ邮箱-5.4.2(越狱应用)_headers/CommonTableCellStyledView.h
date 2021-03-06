//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMCommonTableViewCell.h"

#import "CommonView-Protocol.h"

@class UIImageView;

@interface CommonTableCellStyledView : FMCommonTableViewCell <CommonView>
{
    UIImageView *bg_normal;
    UIImageView *bg_highlighted;
    int cellPosition;
}

@property(retain, nonatomic) UIImageView *bg_highlighted; // @synthesize bg_highlighted;
@property(retain, nonatomic) UIImageView *bg_normal; // @synthesize bg_normal;
@property(nonatomic) int cellPosition; // @synthesize cellPosition;
- (void).cxx_destruct;
- (unsigned long long)unicodeLengthOfString:(id)arg1;
- (void)toEdit:(_Bool)arg1 animated:(_Bool)arg2;
- (void)toSelect:(_Bool)arg1;
- (void)layout;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 frame:(struct CGRect)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)init;

@end

