//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSString;

@interface AlbumComment : NSObject
{
    _Bool _usefuled;
    NSString *_cid;
    NSString *_uid;
    NSString *_username;
    NSString *_xid;
    NSString *_xname;
    NSString *_sid;
    NSString *_replyid;
    NSString *_yestxt;
    NSString *_notxt;
    NSString *_device;
    NSString *_admintxt;
    NSString *_useful;
    NSString *_ip;
    NSString *_from;
    NSString *_flag;
    NSString *_editor_name;
    NSString *_addtime;
    NSString *_faceimg;
    NSString *_vip;
    NSString *_total;
    NSDateFormatter *_dateFormatter;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(copy, nonatomic) NSString *total; // @synthesize total=_total;
@property(nonatomic) _Bool usefuled; // @synthesize usefuled=_usefuled;
@property(copy, nonatomic) NSString *vip; // @synthesize vip=_vip;
@property(copy, nonatomic) NSString *faceimg; // @synthesize faceimg=_faceimg;
@property(copy, nonatomic) NSString *addtime; // @synthesize addtime=_addtime;
@property(copy, nonatomic) NSString *editor_name; // @synthesize editor_name=_editor_name;
@property(copy, nonatomic) NSString *flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(copy, nonatomic) NSString *useful; // @synthesize useful=_useful;
@property(copy, nonatomic) NSString *admintxt; // @synthesize admintxt=_admintxt;
@property(copy, nonatomic) NSString *device; // @synthesize device=_device;
@property(copy, nonatomic) NSString *notxt; // @synthesize notxt=_notxt;
@property(copy, nonatomic) NSString *yestxt; // @synthesize yestxt=_yestxt;
@property(copy, nonatomic) NSString *replyid; // @synthesize replyid=_replyid;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *xname; // @synthesize xname=_xname;
@property(copy, nonatomic) NSString *xid; // @synthesize xid=_xid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void)dealloc;

@end

