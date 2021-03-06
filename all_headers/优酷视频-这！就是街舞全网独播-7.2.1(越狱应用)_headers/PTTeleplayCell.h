//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class PTTeleplayLayout, SKTeleplayView;
@protocol SKTeleplayCellDelegate;

@interface PTTeleplayCell : UITableViewCell
{
    SKTeleplayView *_teleplayView;
    id <SKTeleplayCellDelegate> _delegate;
    PTTeleplayLayout *_layout;
}

@property(retain, nonatomic) PTTeleplayLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <SKTeleplayCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKTeleplayView *teleplayView; // @synthesize teleplayView=_teleplayView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

