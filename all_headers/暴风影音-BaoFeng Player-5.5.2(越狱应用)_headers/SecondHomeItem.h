//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SecondHomeDetail;

@interface SecondHomeItem : NSObject
{
    NSString *mCover_url;
    NSString *mUrl;
    NSString *mId;
    NSString *mType;
    NSString *mDesc;
    NSString *mTitle;
    NSString *mSubtitle;
    NSString *mColumn_id;
    NSString *mColumn_seq;
    NSString *mDefault;
    SecondHomeDetail *mSecondHomeDetail;
    NSString *mOnline_at;
    _Bool *bNew;
}

@property(nonatomic) _Bool *bNew; // @synthesize bNew;
@property(retain, nonatomic) NSString *mOnline_at; // @synthesize mOnline_at;
@property(retain, nonatomic) SecondHomeDetail *mSecondHomeDetail; // @synthesize mSecondHomeDetail;
@property(retain, nonatomic) NSString *mDefault; // @synthesize mDefault;
@property(retain, nonatomic) NSString *mColumn_seq; // @synthesize mColumn_seq;
@property(retain, nonatomic) NSString *mColumn_id; // @synthesize mColumn_id;
@property(retain, nonatomic) NSString *mSubtitle; // @synthesize mSubtitle;
@property(retain, nonatomic) NSString *mTitle; // @synthesize mTitle;
@property(retain, nonatomic) NSString *mDesc; // @synthesize mDesc;
@property(retain, nonatomic) NSString *mType; // @synthesize mType;
@property(retain, nonatomic) NSString *mId; // @synthesize mId;
@property(retain, nonatomic) NSString *mUrl; // @synthesize mUrl;
@property(retain, nonatomic) NSString *mCover_url; // @synthesize mCover_url;
- (void)dealloc;

@end

