//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class PDSTagView, UIButton, UIImageView, UILabel;

@interface PDGroupMemberListDetailCell : UITableViewCell
{
    PDSTagView *_levelView;
    UIImageView *_imageAvatar;
    UILabel *_lblNickName;
    PDSTagView *_stagView;
    UILabel *_lblPosition;
    UIButton *_btnChat;
}

@property(retain, nonatomic) UIButton *btnChat; // @synthesize btnChat=_btnChat;
@property(retain, nonatomic) UILabel *lblPosition; // @synthesize lblPosition=_lblPosition;
@property(retain, nonatomic) PDSTagView *stagView; // @synthesize stagView=_stagView;
@property(retain, nonatomic) UILabel *lblNickName; // @synthesize lblNickName=_lblNickName;
@property(retain, nonatomic) UIImageView *imageAvatar; // @synthesize imageAvatar=_imageAvatar;
- (void).cxx_destruct;
- (void)refreshUserListCell:(id)arg1;
- (struct UIEdgeInsets)layoutMargins;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

