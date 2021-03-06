//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TDInteractivePost : NSObject
{
    _Bool _is_like;
    _Bool _is_stick;
    _Bool _is_essence;
    NSString *_title;
    NSString *_postId;
    NSString *_create_time;
    NSString *_create_time_str;
    NSString *_status;
    NSString *_like_count;
    NSString *_reply_count;
    NSString *_view_count;
    NSArray *_content;
    NSString *_userName;
    NSString *_userImg;
    NSString *_template_type;
    NSArray *_textContents;
    NSArray *_imageContents;
    NSString *_publish_time;
    NSString *_user_id;
    NSString *_modified_time;
    NSString *_fandom_id;
    long long _type;
    NSString *_themeTitle;
    NSString *_themeId;
    long long _index;
    long long _postFromType;
}

+ (id)modelCustomPropertyMapper;
+ (id)modelContainerPropertyGenericClass;
@property(nonatomic) long long postFromType; // @synthesize postFromType=_postFromType;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *themeId; // @synthesize themeId=_themeId;
@property(retain, nonatomic) NSString *themeTitle; // @synthesize themeTitle=_themeTitle;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *fandom_id; // @synthesize fandom_id=_fandom_id;
@property(retain, nonatomic) NSString *modified_time; // @synthesize modified_time=_modified_time;
@property(nonatomic) _Bool is_essence; // @synthesize is_essence=_is_essence;
@property(nonatomic) _Bool is_stick; // @synthesize is_stick=_is_stick;
@property(retain, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSString *publish_time; // @synthesize publish_time=_publish_time;
@property(retain, nonatomic) NSArray *imageContents; // @synthesize imageContents=_imageContents;
@property(retain, nonatomic) NSArray *textContents; // @synthesize textContents=_textContents;
@property(retain, nonatomic) NSString *template_type; // @synthesize template_type=_template_type;
@property(retain, nonatomic) NSString *userImg; // @synthesize userImg=_userImg;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSArray *content; // @synthesize content=_content;
@property(nonatomic) _Bool is_like; // @synthesize is_like=_is_like;
@property(retain, nonatomic) NSString *view_count; // @synthesize view_count=_view_count;
@property(retain, nonatomic) NSString *reply_count; // @synthesize reply_count=_reply_count;
@property(retain, nonatomic) NSString *like_count; // @synthesize like_count=_like_count;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *create_time_str; // @synthesize create_time_str=_create_time_str;
@property(retain, nonatomic) NSString *create_time; // @synthesize create_time=_create_time;
@property(retain, nonatomic) NSString *postId; // @synthesize postId=_postId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

