//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NLNotificationCenterListViewCell;

@interface NLNotificationCenterListViewCellUIPolicy : NSObject
{
    NLNotificationCenterListViewCell *_cell;
}

+ (double)cellHeightWithNotification:(id)arg1 forWidth:(double)arg2;
+ (void)prepareStyledText:(id)arg1;
+ (id)unreadNotificationColorWithCell:(id)arg1;
@property(nonatomic) __weak NLNotificationCenterListViewCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)updateOnTouchesCancelled;
- (void)updateOnTouchesEnded;
- (void)updateOnTouchesBegan;
- (void)layoutSubviews;
- (void)configureCellOnAwakeFromNib;
- (void)configureCellOnInit;
- (void)configureEmojiImageView:(id)arg1;
- (void)configureBorder:(id)arg1;
- (void)configureTimeLabel:(id)arg1;
- (void)configureDivisionLine:(id)arg1;
- (void)configureSenderLabel:(id)arg1;
- (void)configureNotificationTextView:(id)arg1;
- (id)selectedBackgroundView;
- (id)initWithNotificationsViewCell:(id)arg1;

@end

