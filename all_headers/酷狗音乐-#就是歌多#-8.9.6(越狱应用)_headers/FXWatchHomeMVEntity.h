//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FXWatchHomeMVEntity : NSObject
{
    long long _channelid;
    NSString *_channelname;
    NSString *_img;
    long long _label;
    NSString *_mvhash;
    long long _playcount;
    NSString *_publish;
    NSString *_remark;
    long long _showsort;
    NSString *_singername;
    long long _sort;
    NSString *_title;
    long long _top;
    NSString *_videoname;
    NSString *_mvDescription;
}

+ (id)initWithMVEntity:(id)arg1;
@property(copy, nonatomic) NSString *mvDescription; // @synthesize mvDescription=_mvDescription;
@property(copy, nonatomic) NSString *videoname; // @synthesize videoname=_videoname;
@property(nonatomic) long long top; // @synthesize top=_top;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString *singername; // @synthesize singername=_singername;
@property(nonatomic) long long showsort; // @synthesize showsort=_showsort;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *publish; // @synthesize publish=_publish;
@property(nonatomic) long long playcount; // @synthesize playcount=_playcount;
@property(copy, nonatomic) NSString *mvhash; // @synthesize mvhash=_mvhash;
@property(nonatomic) long long label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *channelname; // @synthesize channelname=_channelname;
@property(nonatomic) long long channelid; // @synthesize channelid=_channelid;
- (void).cxx_destruct;

@end

