//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray;
@protocol FLEXTableContentCellDelegate;

@interface FLEXTableContentCell : UITableViewCell
{
    NSArray *_labels;
    id <FLEXTableContentCellDelegate> _delegate;
}

+ (id)cellWithTableView:(id)arg1 columnNumber:(long long)arg2;
@property(nonatomic) __weak id <FLEXTableContentCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
- (void).cxx_destruct;
- (void)labelDidTap:(id)arg1;
- (void)layoutSubviews;

@end

