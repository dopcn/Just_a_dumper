//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UIButton, UILabel;
@protocol MomFoodTableCellDelegate;

@interface MomFoodTableCell : UITableViewCell
{
    id <MomFoodTableCellDelegate> _delegate;
    UILabel *_foodTitle;
    long long _foodReaction;
    long long _index;
    NSMutableArray *_buttons;
    UIButton *_selectedButton;
}

@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long foodReaction; // @synthesize foodReaction=_foodReaction;
@property(retain, nonatomic) UILabel *foodTitle; // @synthesize foodTitle=_foodTitle;
@property(nonatomic) __weak id <MomFoodTableCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onReactionButtonClick:(id)arg1;
- (void)selectButtonWithFoodReaction:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

