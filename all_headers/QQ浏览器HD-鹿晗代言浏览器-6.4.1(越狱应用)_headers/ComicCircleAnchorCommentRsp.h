//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class ComicCirclePostDetail, NSArray;

@interface ComicCircleAnchorCommentRsp : JceObjectV2
{
    int jcev2_p_2_r_iCommentPos;
    ComicCirclePostDetail *jcev2_p_0_r_stPostDetail;
    NSArray *jcev2_p_1_r_vComment__b0x9i_VOComicCircleComment;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_iCommentPos, setter=setJce_iCommentPos:) int jcev2_p_2_r_iCommentPos; // @synthesize jcev2_p_2_r_iCommentPos;
@property(retain, nonatomic, getter=jce_vComment, setter=setJce_vComment:) NSArray *jcev2_p_1_r_vComment__b0x9i_VOComicCircleComment; // @synthesize jcev2_p_1_r_vComment__b0x9i_VOComicCircleComment;
@property(retain, nonatomic, getter=jce_stPostDetail, setter=setJce_stPostDetail:) ComicCirclePostDetail *jcev2_p_0_r_stPostDetail; // @synthesize jcev2_p_0_r_stPostDetail;
- (void).cxx_destruct;
- (id)init;

@end

