//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ShareServiceData : NSObject
{
    NSString *m_iconResPath;
    NSString *m_iconDisableResPath;
    NSString *m_titleResPath;
    NSString *m_key;
}

+ (id)dataWithkey:(id)arg1 icon:(id)arg2 iconDisable:(id)arg3 title:(id)arg4;
@property(copy, nonatomic) NSString *key; // @synthesize key=m_key;
@property(copy, nonatomic) NSString *titleResPath; // @synthesize titleResPath=m_titleResPath;
@property(copy, nonatomic) NSString *iconDisableResPath; // @synthesize iconDisableResPath=m_iconDisableResPath;
@property(copy, nonatomic) NSString *iconResPath; // @synthesize iconResPath=m_iconResPath;
- (id)initWithkey:(id)arg1 icon:(id)arg2 iconDisable:(id)arg3 title:(id)arg4;
- (void)dealloc;

@end

