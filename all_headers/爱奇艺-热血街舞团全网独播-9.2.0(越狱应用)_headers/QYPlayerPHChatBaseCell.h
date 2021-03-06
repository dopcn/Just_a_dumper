//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView;
@protocol QYPlayerPHChatBaseCellDelegate;

@interface QYPlayerPHChatBaseCell : UITableViewCell
{
    _Bool _isMySelf;
    _Bool _isNeedTime;
    UIView *_bodyView;
    NSString *_uid;
    id <QYPlayerPHChatBaseCellDelegate> _delegate;
    UILabel *_timeLB;
    UIImageView *_imgHead;
    UILabel *_usernameLB;
}

+ (struct CGSize)getSizeByMsg:(id)arg1 width:(double)arg2 needTime:(_Bool)arg3;
@property(retain, nonatomic) UILabel *usernameLB; // @synthesize usernameLB=_usernameLB;
@property(retain, nonatomic) UIImageView *imgHead; // @synthesize imgHead=_imgHead;
@property(retain, nonatomic) UILabel *timeLB; // @synthesize timeLB=_timeLB;
@property(nonatomic) __weak id <QYPlayerPHChatBaseCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) _Bool isNeedTime; // @synthesize isNeedTime=_isNeedTime;
@property(nonatomic) _Bool isMySelf; // @synthesize isMySelf=_isMySelf;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
- (void).cxx_destruct;
- (void)tapImgAct;
- (void)configViewByMsg:(id)arg1 info:(id)arg2 needTime:(_Bool)arg3 width:(double)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

