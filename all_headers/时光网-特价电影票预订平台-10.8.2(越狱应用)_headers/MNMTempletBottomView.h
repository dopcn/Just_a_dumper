//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBModel.h"

@class MNMTemplet, NSAttributedString, NSNumber, NSString;

@interface MNMTempletBottomView : MTBModel
{
    NSString *_stringAvatar;
    NSAttributedString *_attributedStringTitle;
    NSAttributedString *_attributedStringRate;
    NSString *_stringReply;
    NSString *_stringLike;
    NSNumber *_numberRouterID;
    long long _enumTempletType;
    MNMTemplet *_modelTempllet;
}

@property(retain, nonatomic) MNMTemplet *modelTempllet; // @synthesize modelTempllet=_modelTempllet;
@property(nonatomic) long long enumTempletType; // @synthesize enumTempletType=_enumTempletType;
@property(retain, nonatomic) NSNumber *numberRouterID; // @synthesize numberRouterID=_numberRouterID;
@property(copy, nonatomic) NSString *stringLike; // @synthesize stringLike=_stringLike;
@property(copy, nonatomic) NSString *stringReply; // @synthesize stringReply=_stringReply;
@property(retain, nonatomic) NSAttributedString *attributedStringRate; // @synthesize attributedStringRate=_attributedStringRate;
@property(retain, nonatomic) NSAttributedString *attributedStringTitle; // @synthesize attributedStringTitle=_attributedStringTitle;
@property(copy, nonatomic) NSString *stringAvatar; // @synthesize stringAvatar=_stringAvatar;
- (void).cxx_destruct;

@end

