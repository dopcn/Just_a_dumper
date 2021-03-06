//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CDArticleSubComment, NSLayoutConstraint, NSString, UILabel, UIView;

@interface CDArticleDetailSubCommentCell : UITableViewCell
{
    CDUnknownBlockType _showUserDetailBlock;
    CDUnknownBlockType _didTapCommentBlock;
    UILabel *_label;
    UIView *_dashLineView;
    NSLayoutConstraint *_dashLineHeight;
    NSString *_userID;
    CDArticleSubComment *_subComment;
}

@property(retain, nonatomic) CDArticleSubComment *subComment; // @synthesize subComment=_subComment;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) __weak NSLayoutConstraint *dashLineHeight; // @synthesize dashLineHeight=_dashLineHeight;
@property(nonatomic) __weak UIView *dashLineView; // @synthesize dashLineView=_dashLineView;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType didTapCommentBlock; // @synthesize didTapCommentBlock=_didTapCommentBlock;
@property(copy, nonatomic) CDUnknownBlockType showUserDetailBlock; // @synthesize showUserDetailBlock=_showUserDetailBlock;
- (void).cxx_destruct;
- (void)didTap:(id)arg1;
- (void)showUserDetail:(id)arg1;
- (void)fillWithSubComment:(id)arg1;
- (void)awakeFromNib;

@end

