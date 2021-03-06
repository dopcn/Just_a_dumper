//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FCCalendarObject : NSObject
{
    _Bool _read;
    _Bool _write;
    _Bool _writeContent;
    _Bool _writeProperties;
    _Bool _bind;
    _Bool _unbind;
    NSString *_name;
    NSString *_path;
    NSString *_ctag;
    NSString *_syncToken;
}

@property(nonatomic) _Bool unbind; // @synthesize unbind=_unbind;
@property(nonatomic) _Bool bind; // @synthesize bind=_bind;
@property(nonatomic) _Bool writeProperties; // @synthesize writeProperties=_writeProperties;
@property(nonatomic) _Bool writeContent; // @synthesize writeContent=_writeContent;
@property(nonatomic) _Bool write; // @synthesize write=_write;
@property(nonatomic) _Bool read; // @synthesize read=_read;
@property(retain, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property(retain, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

