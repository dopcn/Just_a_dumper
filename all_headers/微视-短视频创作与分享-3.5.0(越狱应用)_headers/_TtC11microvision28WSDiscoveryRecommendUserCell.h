//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UILabel, _TtC11microvision12WSAvatarView, _TtC11microvision14WSFollowButton, stMetaPerson;
@protocol _TtP11microvision36WSDiscoveryRecommendUserCellDelegate_;

@interface _TtC11microvision28WSDiscoveryRecommendUserCell : UICollectionViewCell
{
    // Error parsing type: , name: headIconView
    // Error parsing type: , name: usernameLabel
    // Error parsing type: , name: reasonLabel
    // Error parsing type: , name: focusButton
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: delegate
    // Error parsing type: , name: person
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)focusButtonTouch:(id)arg1;
- (void)closeButtonTouch:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic, retain) stMetaPerson *person; // @synthesize person;
@property(nonatomic) __weak id <_TtP11microvision36WSDiscoveryRecommendUserCellDelegate_> delegate; // @synthesize delegate;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton;
@property(nonatomic) __weak _TtC11microvision14WSFollowButton *focusButton; // @synthesize focusButton;
@property(nonatomic) __weak UILabel *reasonLabel; // @synthesize reasonLabel;
@property(nonatomic) __weak UILabel *usernameLabel; // @synthesize usernameLabel;
@property(nonatomic) __weak _TtC11microvision12WSAvatarView *headIconView; // @synthesize headIconView;

@end

