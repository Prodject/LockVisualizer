#import <LightMessaging/LightMessaging.h>
#import <notify.h>

#define kHiddenNotifName "com.ipadkid.lockvisualizer/hidden"
#define kShowingNotifName "com.ipadkid.lockvisualizer/showing"

static LMConnection interprocSpringMedia = {
    MACH_PORT_NULL,
    "com.ipadkid.lockvisualizer.messaging"
};
