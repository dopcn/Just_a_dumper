//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MttNovelPayOutBook : NSObject
{
    _Bool _bHaveNotify;
    NSString *_strBookId;
    NSMutableArray *_arraySerialId;
}

@property(retain, nonatomic) NSMutableArray *arraySerialId; // @synthesize arraySerialId=_arraySerialId;
@property(nonatomic) _Bool bHaveNotify; // @synthesize bHaveNotify=_bHaveNotify;
@property(retain, nonatomic) NSString *strBookId; // @synthesize strBookId=_strBookId;
- (void).cxx_destruct;

@end

