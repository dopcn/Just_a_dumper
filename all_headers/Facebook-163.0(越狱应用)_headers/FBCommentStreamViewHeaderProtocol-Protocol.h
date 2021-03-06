//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSAttributedString, NSString, UIButton;

@protocol FBCommentStreamViewHeaderProtocol <NSObject>
+ (double)headerHeight;
+ (struct UIEdgeInsets)headerContentInsets;
@property(nonatomic) _Bool shouldShowDoneButton;
@property(readonly, nonatomic) UIButton *doneButton;
@property(readonly, nonatomic) UIButton *backButton;
@property(copy, nonatomic) NSString *title;

@optional
@property(copy, nonatomic) NSAttributedString *subtitle;
@property(copy, nonatomic) NSArray *rightHeaderButtons;
@property(copy, nonatomic) NSArray *leftHeaderButtons;
@end

